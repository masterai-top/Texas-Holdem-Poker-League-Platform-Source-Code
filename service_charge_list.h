#ifndef __SERVICE_CHARGE_LIST_H__
#define __SERVICE_CHARGE_LIST_H__
class ServiceChargeListRequest
{
public:
	ServiceChargeListRequest(const string& json) {
		this->Deserialize(json);
	}
	template <typename Writer>
	void Serialize(Writer& writer) const {
		writer.StartObject();
		SERIALIZE_MEMBER(writer,roomId);
		SERIALIZE_MEMBER(writer,startDate);
		SERIALIZE_MEMBER(writer,endDate);

		writer.EndObject();
	}

	void toString(std::string& json) {
		StringBuffer sb;
		Writer<StringBuffer> writer(sb);
		Serialize(writer);
		json = sb.GetString();
	}

	void Deserialize(const string& json)
	{
		Document d;
		if (d.Parse(json.c_str()).HasParseError()){
			throw logic_error("parse json error. raw data : " + json);
		}
		SET_DOC_MEMBER(d,roomId);
		SET_DOC_MEMBER(d,startDate);
		SET_DOC_MEMBER(d,endDate);

	}

	static tars::Int32 handler(const vector<tars::Char>& reqBuf, const map<std::string, std::string>& extraInfo, vector<tars::Char>& rspBuf)
	{
	    return 0;
	}
private:
	CString        	_roomId         ;  //房间Id
	CString        	_startDate      ;  //开始时间
	CString        	_endDate        ;  //结束时间

};
class ServiceChargeListResponse
{
public:
	ServiceChargeListResponse(const string& json) {
		this->Deserialize(json);
	}
	template <typename Writer>
	void Serialize(Writer& writer) const {
		writer.StartObject();
		SERIALIZE_MEMBER(writer,id);
		SERIALIZE_MEMBER(writer,roomId);
		SERIALIZE_MEMBER(writer,rate);
		SERIALIZE_MEMBER(writer,optUser);
		SERIALIZE_MEMBER(writer,createDate);

		writer.EndObject();
	}

	void toString(std::string& json) {
		StringBuffer sb;
		Writer<StringBuffer> writer(sb);
		Serialize(writer);
		json = sb.GetString();
	}

	void Deserialize(const string& json)
	{
		Document d;
		if (d.Parse(json.c_str()).HasParseError()){
			throw logic_error("parse json error. raw data : " + json);
		}
		SET_DOC_MEMBER(d,id);
		SET_DOC_MEMBER(d,roomId);
		SET_DOC_MEMBER(d,rate);
		SET_DOC_MEMBER(d,optUser);
		SET_DOC_MEMBER(d,createDate);

	}

	static tars::Int32 handler(const vector<tars::Char>& reqBuf, const map<std::string, std::string>& extraInfo, vector<tars::Char>& rspBuf)
	{
	    return 0;
	}
private:
	CInteger       	_id             ;  //主键
	CString        	_roomId         ;  //房间id
	CString        	_rate           ;  //抽成百分比（例：20%)
	CString        	_optUser        ;  //操作者
	CString        	_createDate     ;  //创建时间

};
#endif
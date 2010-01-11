/* dp_sp_dpbuiltin.cpp
   Generated by spxml2struct from builtin.xml

   !!! DO NOT EDIT !!!

*/

#include <stdio.h>

#include "spdpbuiltin.hpp"

#include "spdatapickle/spdplib.hpp"

static SP_DPMetaField_t gMetaSP_DPChar [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Value",
		SP_DP_FIELD_OFFSET(SP_DPChar_t, mValue), eTypeSPDPChar, 0, 1, 0,
		"", sizeof(char), sizeof(char), 0 }
};

static SP_DPMetaField_t gMetaSP_DPInt16 [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Value",
		SP_DP_FIELD_OFFSET(SP_DPInt16_t, mValue), eTypeSPDPInt16, 0, 1, 0,
		"", sizeof(int16_t), sizeof(int16_t), 0 }
};

static SP_DPMetaField_t gMetaSP_DPUInt16 [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Value",
		SP_DP_FIELD_OFFSET(SP_DPUInt16_t, mValue), eTypeSPDPUint16, 0, 1, 0,
		"", sizeof(uint16_t), sizeof(uint16_t), 0 }
};

static SP_DPMetaField_t gMetaSP_DPInt32 [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Value",
		SP_DP_FIELD_OFFSET(SP_DPInt32_t, mValue), eTypeSPDPInt32, 0, 1, 0,
		"", sizeof(int32_t), sizeof(int32_t), 0 }
};

static SP_DPMetaField_t gMetaSP_DPUInt32 [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Value",
		SP_DP_FIELD_OFFSET(SP_DPUInt32_t, mValue), eTypeSPDPUint32, 0, 1, 0,
		"", sizeof(uint32_t), sizeof(uint32_t), 0 }
};

static SP_DPMetaField_t gMetaSP_DPInt64 [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Value",
		SP_DP_FIELD_OFFSET(SP_DPInt64_t, mValue), eTypeSPDPInt64, 0, 1, 0,
		"", sizeof(int64_t), sizeof(int64_t), 0 }
};

static SP_DPMetaField_t gMetaSP_DPUInt64 [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Value",
		SP_DP_FIELD_OFFSET(SP_DPUInt64_t, mValue), eTypeSPDPUint64, 0, 1, 0,
		"", sizeof(uint64_t), sizeof(uint64_t), 0 }
};

static SP_DPMetaField_t gMetaSP_DPFloat [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Value",
		SP_DP_FIELD_OFFSET(SP_DPFloat_t, mValue), eTypeSPDPFloat, 0, 1, 0,
		"", sizeof(float), sizeof(float), 0 }
};

static SP_DPMetaField_t gMetaSP_DPDouble [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Value",
		SP_DP_FIELD_OFFSET(SP_DPDouble_t, mValue), eTypeSPDPDouble, 0, 1, 0,
		"", sizeof(double), sizeof(double), 0 }
};

static SP_DPMetaField_t gMetaSP_DPString [] = {
	{ sizeof(SP_DPMetaField_t), 1, "String",
		SP_DP_FIELD_OFFSET(SP_DPString_t, mString), eTypeSPDPChar, 1, 1, 0,
		"", sizeof(char *), sizeof(char), 0 }
};

static SP_DPMetaField_t gMetaSP_DPStringList [] = {
	{ sizeof(SP_DPMetaField_t), 1, "List",
		SP_DP_FIELD_OFFSET(SP_DPStringList_t, mList), eTypeSP_DPString, 1, 1, 0,
		"Count", sizeof(SP_DPString_t *), sizeof(SP_DPString_t), 0 },
	{ sizeof(SP_DPMetaField_t), 2, "Count",
		SP_DP_FIELD_OFFSET(SP_DPStringList_t, mCount), eTypeSPDPInt32, 0, 1, 0,
		"", sizeof(int32_t), sizeof(int32_t), 1 }
};

static SP_DPMetaField_t gMetaSP_DPBuffer [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Buffer",
		SP_DP_FIELD_OFFSET(SP_DPBuffer_t, mBuffer), eTypeSPDPChar, 1, 1, 0,
		"Size", sizeof(char *), sizeof(char), 0 },
	{ sizeof(SP_DPMetaField_t), 2, "Size",
		SP_DP_FIELD_OFFSET(SP_DPBuffer_t, mSize), eTypeSPDPInt32, 0, 1, 0,
		"", sizeof(int32_t), sizeof(int32_t), 1 }
};

static SP_DPMetaField_t gMetaSP_DPInt32List [] = {
	{ sizeof(SP_DPMetaField_t), 1, "List",
		SP_DP_FIELD_OFFSET(SP_DPInt32List_t, mList), eTypeSPDPInt32, 1, 1, 0,
		"Count", sizeof(int32_t *), sizeof(int32_t), 0 },
	{ sizeof(SP_DPMetaField_t), 2, "Count",
		SP_DP_FIELD_OFFSET(SP_DPInt32List_t, mCount), eTypeSPDPInt32, 0, 1, 0,
		"", sizeof(int32_t), sizeof(int32_t), 1 }
};

static SP_DPMetaField_t gMetaSP_DPUInt32List [] = {
	{ sizeof(SP_DPMetaField_t), 1, "List",
		SP_DP_FIELD_OFFSET(SP_DPUInt32List_t, mList), eTypeSPDPUint32, 1, 1, 0,
		"Count", sizeof(uint32_t *), sizeof(uint32_t), 0 },
	{ sizeof(SP_DPMetaField_t), 2, "Count",
		SP_DP_FIELD_OFFSET(SP_DPUInt32List_t, mCount), eTypeSPDPInt32, 0, 1, 0,
		"", sizeof(int32_t), sizeof(int32_t), 1 }
};

static SP_DPMetaField_t gMetaSP_DPInt64List [] = {
	{ sizeof(SP_DPMetaField_t), 1, "List",
		SP_DP_FIELD_OFFSET(SP_DPInt64List_t, mList), eTypeSPDPInt64, 1, 1, 0,
		"Count", sizeof(int64_t *), sizeof(int64_t), 0 },
	{ sizeof(SP_DPMetaField_t), 2, "Count",
		SP_DP_FIELD_OFFSET(SP_DPInt64List_t, mCount), eTypeSPDPInt32, 0, 1, 0,
		"", sizeof(int32_t), sizeof(int32_t), 1 }
};

static SP_DPMetaField_t gMetaSP_DPUInt64List [] = {
	{ sizeof(SP_DPMetaField_t), 1, "List",
		SP_DP_FIELD_OFFSET(SP_DPUInt64List_t, mList), eTypeSPDPUint64, 1, 1, 0,
		"Count", sizeof(uint64_t *), sizeof(uint64_t), 0 },
	{ sizeof(SP_DPMetaField_t), 2, "Count",
		SP_DP_FIELD_OFFSET(SP_DPUInt64List_t, mCount), eTypeSPDPInt32, 0, 1, 0,
		"", sizeof(int32_t), sizeof(int32_t), 1 }
};

static SP_DPMetaStruct_t gMetaSP_DPStructList [] = {
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPChar, "Char", sizeof(SP_DPChar_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPChar), gMetaSP_DPChar },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPInt16, "Int16", sizeof(SP_DPInt16_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPInt16), gMetaSP_DPInt16 },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPUInt16, "UInt16", sizeof(SP_DPUInt16_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPUInt16), gMetaSP_DPUInt16 },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPInt32, "Int32", sizeof(SP_DPInt32_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPInt32), gMetaSP_DPInt32 },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPUInt32, "UInt32", sizeof(SP_DPUInt32_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPUInt32), gMetaSP_DPUInt32 },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPInt64, "Int64", sizeof(SP_DPInt64_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPInt64), gMetaSP_DPInt64 },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPUInt64, "UInt64", sizeof(SP_DPUInt64_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPUInt64), gMetaSP_DPUInt64 },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPFloat, "Float", sizeof(SP_DPFloat_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPFloat), gMetaSP_DPFloat },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPDouble, "Double", sizeof(SP_DPDouble_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPDouble), gMetaSP_DPDouble },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPString, "String", sizeof(SP_DPString_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPString), gMetaSP_DPString },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPStringList, "StringList", sizeof(SP_DPStringList_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPStringList), gMetaSP_DPStringList },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPBuffer, "Buffer", sizeof(SP_DPBuffer_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPBuffer), gMetaSP_DPBuffer },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPInt32List, "Int32List", sizeof(SP_DPInt32List_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPInt32List), gMetaSP_DPInt32List },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPUInt32List, "UInt32List", sizeof(SP_DPUInt32List_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPUInt32List), gMetaSP_DPUInt32List },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPInt64List, "Int64List", sizeof(SP_DPInt64List_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPInt64List), gMetaSP_DPInt64List },
	{ sizeof( SP_DPMetaStruct_t ), eTypeSP_DPUInt64List, "UInt64List", sizeof(SP_DPUInt64List_t),
		SP_DP_ARRAY_SIZE(gMetaSP_DPUInt64List), gMetaSP_DPUInt64List },
	gSP_DPBuiltinMetaInfo->mStructList[0],
	gSP_DPBuiltinMetaInfo->mStructList[1],
	gSP_DPBuiltinMetaInfo->mStructList[2],
	gSP_DPBuiltinMetaInfo->mStructList[3],
	gSP_DPBuiltinMetaInfo->mStructList[4],
	gSP_DPBuiltinMetaInfo->mStructList[5],
	gSP_DPBuiltinMetaInfo->mStructList[6],
	gSP_DPBuiltinMetaInfo->mStructList[7],
	gSP_DPBuiltinMetaInfo->mStructList[8],
	gSP_DPBuiltinMetaInfo->mStructList[9],
	gSP_DPBuiltinMetaInfo->mStructList[10],
	gSP_DPBuiltinMetaInfo->mStructList[11],
	gSP_DPBuiltinMetaInfo->mStructList[12],
	gSP_DPBuiltinMetaInfo->mStructList[13],
	gSP_DPBuiltinMetaInfo->mStructList[14],
	gSP_DPBuiltinMetaInfo->mStructList[15],
	gSP_DPBuiltinMetaInfo->mStructList[16],
	gSP_DPBuiltinMetaInfo->mStructList[17],
	gSP_DPBuiltinMetaInfo->mStructList[18],
	gSP_DPBuiltinMetaInfo->mStructList[19],
	gSP_DPBuiltinMetaInfo->mStructList[20],
	gSP_DPBuiltinMetaInfo->mStructList[21],
	gSP_DPBuiltinMetaInfo->mStructList[22],
	gSP_DPBuiltinMetaInfo->mStructList[23],
	gSP_DPBuiltinMetaInfo->mStructList[24],
	gSP_DPBuiltinMetaInfo->mStructList[25],
	gSP_DPBuiltinMetaInfo->mStructList[26],
	gSP_DPBuiltinMetaInfo->mStructList[27],
	gSP_DPBuiltinMetaInfo->mStructList[28],
	gSP_DPBuiltinMetaInfo->mStructList[29],
	gSP_DPBuiltinMetaInfo->mStructList[30],
	gSP_DPBuiltinMetaInfo->mStructList[31],
	gSP_DPBuiltinMetaInfo->mStructList[32],
	gSP_DPBuiltinMetaInfo->mStructList[33],
	gSP_DPBuiltinMetaInfo->mStructList[34],
	gSP_DPBuiltinMetaInfo->mStructList[35],
	gSP_DPBuiltinMetaInfo->mStructList[36],
	gSP_DPBuiltinMetaInfo->mStructList[37],
	gSP_DPBuiltinMetaInfo->mStructList[38],
	gSP_DPBuiltinMetaInfo->mStructList[39],
	gSP_DPBuiltinMetaInfo->mStructList[40],
	gSP_DPBuiltinMetaInfo->mStructList[41],
	gSP_DPBuiltinMetaInfo->mStructList[42],
	gSP_DPBuiltinMetaInfo->mStructList[43],
	gSP_DPBuiltinMetaInfo->mStructList[44],
	gSP_DPBuiltinMetaInfo->mStructList[45],
	gSP_DPBuiltinMetaInfo->mStructList[46],
	gSP_DPBuiltinMetaInfo->mStructList[47]
};

static SP_DPMetaInfo_t gMetaSP_DPBuiltin = {
	sizeof( SP_DPMetaInfo_t ), "SP_DP", "builtin", SP_DP_ARRAY_SIZE(gMetaSP_DPStructList), gMetaSP_DPStructList
};

SP_DPMetaInfo_t * gSP_DPBuiltinMetaInfo = &gMetaSP_DPBuiltin;

SP_DPBuiltinPickle :: SP_DPBuiltinPickle( int pickleType )
{
	mImpl = NULL;
	if( SP_DataPickle::eXml == pickleType ) {
		mImpl = new SP_XmlPickle( gSP_DPBuiltinMetaInfo );
	} else if( SP_DataPickle::eXmlRpc == pickleType ) {
		mImpl = new SP_XmlRpcPickle( gSP_DPBuiltinMetaInfo );
	} else if( SP_DataPickle::eJson == pickleType ) {
		mImpl = new SP_JsonPickle( gSP_DPBuiltinMetaInfo );
	} else if( SP_DataPickle::eProtoBuf == pickleType ) {
		mImpl = new SP_ProtoBufPickle( gSP_DPBuiltinMetaInfo );
	}
}
SP_DPBuiltinPickle :: ~SP_DPBuiltinPickle()
{
	if( NULL != mImpl ) delete mImpl, mImpl = NULL;
}

int SP_DPBuiltinPickle :: pickle( SP_DPChar_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPChar_t ),
		eTypeSP_DPChar, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPChar_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPChar, structure, sizeof( SP_DPChar_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPInt16_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPInt16_t ),
		eTypeSP_DPInt16, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPInt16_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPInt16, structure, sizeof( SP_DPInt16_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPUInt16_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPUInt16_t ),
		eTypeSP_DPUInt16, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPUInt16_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPUInt16, structure, sizeof( SP_DPUInt16_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPInt32_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPInt32_t ),
		eTypeSP_DPInt32, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPInt32_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPInt32, structure, sizeof( SP_DPInt32_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPUInt32_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPUInt32_t ),
		eTypeSP_DPUInt32, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPUInt32_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPUInt32, structure, sizeof( SP_DPUInt32_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPInt64_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPInt64_t ),
		eTypeSP_DPInt64, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPInt64_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPInt64, structure, sizeof( SP_DPInt64_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPUInt64_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPUInt64_t ),
		eTypeSP_DPUInt64, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPUInt64_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPUInt64, structure, sizeof( SP_DPUInt64_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPFloat_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPFloat_t ),
		eTypeSP_DPFloat, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPFloat_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPFloat, structure, sizeof( SP_DPFloat_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPDouble_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPDouble_t ),
		eTypeSP_DPDouble, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPDouble_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPDouble, structure, sizeof( SP_DPDouble_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPString_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPString_t ),
		eTypeSP_DPString, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPString_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPString, structure, sizeof( SP_DPString_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPStringList_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPStringList_t ),
		eTypeSP_DPStringList, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPStringList_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPStringList, structure, sizeof( SP_DPStringList_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPBuffer_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPBuffer_t ),
		eTypeSP_DPBuffer, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPBuffer_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPBuffer, structure, sizeof( SP_DPBuffer_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPInt32List_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPInt32List_t ),
		eTypeSP_DPInt32List, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPInt32List_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPInt32List, structure, sizeof( SP_DPInt32List_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPUInt32List_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPUInt32List_t ),
		eTypeSP_DPUInt32List, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPUInt32List_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPUInt32List, structure, sizeof( SP_DPUInt32List_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPInt64List_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPInt64List_t ),
		eTypeSP_DPInt64List, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPInt64List_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPInt64List, structure, sizeof( SP_DPInt64List_t ) );
}

int SP_DPBuiltinPickle :: pickle( SP_DPUInt64List_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( SP_DPUInt64List_t ),
		eTypeSP_DPUInt64List, buffer );
}

int SP_DPBuiltinPickle :: unpickle( SP_XmlStringBuffer * buffer, SP_DPUInt64List_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeSP_DPUInt64List, structure, sizeof( SP_DPUInt64List_t ) );
}


int SP_DPBuiltinPickle :: freeFields( SP_DPChar_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPChar );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPChar_t * src, SP_DPChar_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPChar, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPInt16_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPInt16 );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPInt16_t * src, SP_DPInt16_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPInt16, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPUInt16_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPUInt16 );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPUInt16_t * src, SP_DPUInt16_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPUInt16, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPInt32_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPInt32 );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPInt32_t * src, SP_DPInt32_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPInt32, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPUInt32_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPUInt32 );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPUInt32_t * src, SP_DPUInt32_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPUInt32, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPInt64_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPInt64 );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPInt64_t * src, SP_DPInt64_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPInt64, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPUInt64_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPUInt64 );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPUInt64_t * src, SP_DPUInt64_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPUInt64, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPFloat_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPFloat );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPFloat_t * src, SP_DPFloat_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPFloat, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPDouble_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPDouble );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPDouble_t * src, SP_DPDouble_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPDouble, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPString_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPString );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPString_t * src, SP_DPString_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPString, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPStringList_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPStringList );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPStringList_t * src, SP_DPStringList_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPStringList, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPBuffer_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPBuffer );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPBuffer_t * src, SP_DPBuffer_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPBuffer, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPInt32List_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPInt32List );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPInt32List_t * src, SP_DPInt32List_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPInt32List, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPUInt32List_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPUInt32List );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPUInt32List_t * src, SP_DPUInt32List_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPUInt32List, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPInt64List_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPInt64List );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPInt64List_t * src, SP_DPInt64List_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPInt64List, dest, sizeof( *dest ) );
}

int SP_DPBuiltinPickle :: freeFields( SP_DPUInt64List_t & structure )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeSP_DPUInt64List );
}

int SP_DPBuiltinPickle :: deepCopy( const SP_DPUInt64List_t * src, SP_DPUInt64List_t * dest )
{
	SP_DPAlloc alloc( gSP_DPBuiltinMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeSP_DPUInt64List, dest, sizeof( *dest ) );
}


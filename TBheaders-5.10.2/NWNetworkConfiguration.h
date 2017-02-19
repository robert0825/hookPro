//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSRecursiveLock, NSString;
@protocol NWRequestCostProtocol, NWRequestFlowProtocol;

@interface NWNetworkConfiguration : NSObject
{
    NSRecursiveLock *_lock;	// 8 = 0x8
    _Bool _isNetworkDataSetCollection;	// 16 = 0x10
    _Bool _isValidHttps;	// 17 = 0x11
    _Bool _isDemoteHttps;	// 18 = 0x12
    _Bool _isNetworkExe;	// 19 = 0x13
    _Bool _isUTOutput;	// 20 = 0x14
    _Bool _userTunnel;	// 21 = 0x15
    _Bool _isMockMode;	// 22 = 0x16
    int _netEnvironment;	// 24 = 0x18
    NSArray *_collectHostArray;	// 32 = 0x20
    NSString *_appkey;	// 40 = 0x28
    NSString *_appSecret;	// 48 = 0x30
    NSString *_authCode;	// 56 = 0x38
    NSString *_Token;	// 64 = 0x40
    NSString *_utdid;	// 72 = 0x48
    NSArray *_collectHostParamsArray;	// 80 = 0x50
    NSString *_debugId;	// 88 = 0x58
    NSString *_authImei;	// 96 = 0x60
    NSString *_uid;	// 104 = 0x68
    NSString *_sidewayReportUid;	// 112 = 0x70
    id <NWRequestCostProtocol> _traceProtocol;	// 120 = 0x78
    id <NWRequestFlowProtocol> _flowProtocol;	// 128 = 0x80
}

+ (_Bool)getNetworkQualityMonitorSwitch;
+ (_Bool)getEmptySchemeSwitch;
+ (_Bool)getPolicyPrioritySwitch;
+ (_Bool)getOrangeSwitch:(id)arg1 defaultValue:(id)arg2;
+ (id)getClientIp;
+ (void)setEnvironment:(int)arg1;
+ (id)getDocumentFiPath;
+ (id)UrlEncodedString:(id)arg1;
+ (id)hmacsha1:(id)arg1 key:(id)arg2;
+ (void)appmonitorDisableSample;
+ (id)getSecuritySign:(id)arg1;
+ (id)shareInstance;
@property(nonatomic) __weak id <NWRequestFlowProtocol> flowProtocol; // @synthesize flowProtocol=_flowProtocol;
@property(nonatomic) __weak id <NWRequestCostProtocol> traceProtocol; // @synthesize traceProtocol=_traceProtocol;
@property(retain, nonatomic) NSString *sidewayReportUid; // @synthesize sidewayReportUid=_sidewayReportUid;
@property _Bool isMockMode; // @synthesize isMockMode=_isMockMode;
@property(nonatomic) _Bool userTunnel; // @synthesize userTunnel=_userTunnel;
@property(retain) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) _Bool isUTOutput; // @synthesize isUTOutput=_isUTOutput;
@property(nonatomic) _Bool isNetworkExe; // @synthesize isNetworkExe=_isNetworkExe;
@property(nonatomic) _Bool isDemoteHttps; // @synthesize isDemoteHttps=_isDemoteHttps;
@property(nonatomic) _Bool isValidHttps; // @synthesize isValidHttps=_isValidHttps;
@property(nonatomic) int netEnvironment; // @synthesize netEnvironment=_netEnvironment;
@property(retain, nonatomic) NSString *authImei; // @synthesize authImei=_authImei;
@property(retain, nonatomic) NSString *debugId; // @synthesize debugId=_debugId;
@property(retain, nonatomic) NSArray *collectHostParamsArray; // @synthesize collectHostParamsArray=_collectHostParamsArray;
@property(readonly, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *Token; // @synthesize Token=_Token;
@property(retain, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(retain, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(retain, nonatomic) NSArray *collectHostArray; // @synthesize collectHostArray=_collectHostArray;
@property(nonatomic) _Bool isNetworkDataSetCollection; // @synthesize isNetworkDataSetCollection=_isNetworkDataSetCollection;
- (void).cxx_destruct;
- (void)updateUserUnit:(id)arg1;
- (void)updatePolicyFromScanCode:(id)arg1;
- (void)disConnectExpiredConnections;
- (void)updateMock:(id)arg1;
- (id)getNetworkSDKVer;
- (void)setuid:(id)arg1;
- (id)getAuthSign;
- (id)getAuthOperator;
- (id)getImsi;
- (id)getAuthNetType;
- (id)getAuthUtdid;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WVCommonUtil : NSObject
{
}

+ (long long)serverIntervalToLocal:(long long)arg1;
+ (double)foregroundTime;
+ (unsigned long long)processorCount;
+ (_Bool)isStatusCodeSuccess:(long long)arg1;
+ (_Bool)isWIFI;
+ (id)networkAccess;
+ (long long)networkStatus;
+ (id)stringByEncodeOccurrencesOfCharacters:(id)arg1 withString:(id)arg2;
+ (id)fixJSON2JSBug:(id)arg1;
+ (id)UUIDString;
+ (_Bool)checkIsForbiddenDomain:(id)arg1;
+ (_Bool)checkIsThirdPartyDomain:(id)arg1;
+ (_Bool)checkIsSecurityDomain:(id)arg1;
+ (long long)getURLContentType:(id)arg1;
+ (id)configURLWithPath:(id)arg1;
+ (id)trimUrlScheme:(id)arg1;
+ (void)completeScheme:(id)arg1;
+ (id)completionUrlScheme:(id)arg1;
+ (_Bool)testSampleRate:(double)arg1;
+ (unsigned long long)randomUnsignedInteger:(unsigned long long)arg1;
+ (double)randomDouble;
+ (int)checkVersion:(id)arg1 withNewVersoin:(id)arg2;
+ (float)currentAppVersion;
+ (id)replaceHTTPSWithHTTP:(id)arg1;
+ (_Bool)isJSURL:(id)arg1;
+ (_Bool)isHTMLURL:(id)arg1;
+ (id)getOriginalParamFromRequestQuery:(id)arg1;
+ (id)urlByReplaceParamAndValue:(id)arg1 withParam:(id)arg2 withParamAndValue:(id)arg3;
+ (id)urlByDeleteParamAndValue:(id)arg1 withParamAndValue:(id)arg2;
+ (id)urlByDeleteParam:(id)arg1 withParam:(id)arg2;
+ (id)urlByAppendParamAndValue:(id)arg1 withParamAndValue:(id)arg2;
+ (id)autoFixRandomParam:(id)arg1 withParamAndValue:(id)arg2;
+ (id)fetchMimeTypeWithURLPath:(id)arg1;
+ (id)getBaseURL:(id)arg1;
+ (id)getResourcePathWithoutParam:(id)arg1;
+ (_Bool)checkIshveParam:(id)arg1 withParamValue:(id)arg2;
+ (id)getParamValueFromUrl:(id)arg1 withParamName:(id)arg2;
+ (id)urlWithoutHash:(id)arg1;
+ (id)urlWithoutQueryAndHash:(id)arg1;
+ (void)updateResourceDic:(id)arg1;
+ (void)initResourceDic;
+ (int)checkNetConnectionSync;
+ (int)checkNetConnection;
+ (_Bool)checkIsBlankUrl:(id)arg1;
+ (void)WindVaneLog:(id)arg1;
+ (_Bool)checkTime:(id)arg1 withStaticTime:(int)arg2;
+ (id)md5WithData:(id)arg1;
+ (id)md5:(id)arg1;
+ (_Bool)isDebugMode;
+ (_Bool)hasWindVaneUA:(id)arg1;
+ (id)addDefaultParamForURL:(id)arg1;
+ (unsigned int)randomInt32:(unsigned int)arg1;
+ (long long)updateNetworkStatus;
+ (id)getParamFromRequestQuery:(id)arg1;
+ (id)getParamFromRequestQuery:(id)arg1 withStopWord:(id)arg2;
+ (id)getCameraStr:(id)arg1;
+ (_Bool)isBlank:(id)arg1;

@end


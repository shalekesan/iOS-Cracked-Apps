//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSString;

@interface TFELoadSession : NSObject
{
    _Bool _success;
    NSString *_url;
    id _userInfo;
    NSData *_responseData;
    NSHTTPURLResponse *_response;
    NSDictionary *_customMetas;
    long long _status;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isSuccess) _Bool success; // @synthesize success=_success;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSDictionary *customMetas; // @synthesize customMetas=_customMetas;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *contentType;
@property(readonly, nonatomic) int httpStatus;
- (id)responseStringWithencoding:(unsigned long long)arg1;
- (id)responseString;
- (id)initWithData:(id)arg1 url:(id)arg2 urlResponse:(id)arg3 userInfo:(id)arg4;
- (id)initWithUrl:(id)arg1 userInfo:(id)arg2;
- (id)initWithData:(id)arg1 url:(id)arg2 urlResponse:(id)arg3;

@end


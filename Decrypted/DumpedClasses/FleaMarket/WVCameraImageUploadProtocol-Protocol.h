//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString, UIView<WVWebViewBasicProtocol>;

@protocol WVCameraImageUploadProtocol <NSObject>
- (void)uploadImageToCDN:(NSString *)arg1 withParam:(NSDictionary *)arg2 withCallback:(void (^)(NSString *, NSDictionary *))arg3 withResultDic:(NSMutableDictionary *)arg4 withWebView:(UIView<WVWebViewBasicProtocol> *)arg5;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol FMConfigCenterProtocol <NSObject>
- (NSDictionary *)getGroupConfigByGroupName:(NSString *)arg1;
- (id)getConfigByGroupName:(NSString *)arg1 key:(NSString *)arg2 defaultConfig:(id)arg3 isDefault:(_Bool *)arg4;
- (void)start;
@end


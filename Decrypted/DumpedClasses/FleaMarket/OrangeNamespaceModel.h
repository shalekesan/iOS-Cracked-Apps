//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface OrangeNamespaceModel : NSObject <NSCopying>
{
    NSString *_appKey;
    NSString *_appVersion;
    NSString *_namespaceId;
    NSString *_name;
    NSString *_resourceId;
    NSString *_type;
    NSString *_loadLevel;
    NSString *_version;
    NSDictionary *_content;
}

@property(retain, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *loadLevel; // @synthesize loadLevel=_loadLevel;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *namespaceId; // @synthesize namespaceId=_namespaceId;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDict:(id)arg1;

@end


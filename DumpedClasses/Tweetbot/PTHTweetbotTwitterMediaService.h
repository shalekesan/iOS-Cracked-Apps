//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHTweetbotMediaService.h"

@class PTHOAuthURLRequest;

@interface PTHTweetbotTwitterMediaService : PTHTweetbotMediaService
{
    PTHOAuthURLRequest *_urlRequest;
    _Bool _cancelled;
}

+ (id)title;
+ (_Bool)canUploadMovies;
+ (_Bool)canUploadImages;
- (void).cxx_destruct;
- (void)cancel;
- (void)uploadMedium:(id)arg1 withMessage:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_uploadMovie:(id)arg1 medium:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_uploadImage:(id)arg1 medium:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBUserSession;

@interface FBVoiceSearchHandler : NSObject
{
    FBUserSession *_session;
    CDUnknownBlockType _nullStateBlock;
}

- (void).cxx_destruct;
- (void)launchSearchWithQuery:(id)arg1 resultType:(unsigned long long)arg2 hostViewController:(id)arg3;
- (void)_nullStateServiceDidLoad:(id)arg1;
- (void)_passNullStateSuggestions;
- (void)loadNullStateSuggestionsWithUpdateBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end

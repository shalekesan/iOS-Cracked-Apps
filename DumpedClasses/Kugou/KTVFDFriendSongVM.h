//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class KTVFDFriendSongNetHelper, NSMutableArray;

@interface KTVFDFriendSongVM : KFViewModelObject
{
    _Bool _isAcceptReqesting;
    int _pageNo;
    long long _friendNo;
    NSMutableArray *_friendSongListArr;
    KTVFDFriendSongNetHelper *_netHelper;
}

@property(nonatomic) _Bool isAcceptReqesting; // @synthesize isAcceptReqesting=_isAcceptReqesting;
@property(retain, nonatomic) KTVFDFriendSongNetHelper *netHelper; // @synthesize netHelper=_netHelper;
@property(retain, nonatomic) NSMutableArray *friendSongListArr; // @synthesize friendSongListArr=_friendSongListArr;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) long long friendNo; // @synthesize friendNo=_friendNo;
- (void).cxx_destruct;
- (id)friendSongItemAtIndex:(long long)arg1;
- (long long)numberOfFriendSong;
- (void)loadMore;
- (void)update;
- (id)init;

@end


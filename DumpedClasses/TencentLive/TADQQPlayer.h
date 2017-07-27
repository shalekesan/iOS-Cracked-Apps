//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQPlayer, QQPlayerItem;

@interface TADQQPlayer : NSObject
{
    _Bool _inPlaying;
    _Bool _readyCanPlay;
    CDStruct_1b6d18a9 _seekTime;
    id <TADQQPlayerDelegate> _delegate;
    id _timeObserver;
    double _totalDuration;
    QQPlayerItem *_playerItem;
    QQPlayer *_player;
}

@property(retain, nonatomic) QQPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) QQPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(nonatomic) __weak id <TADQQPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelPlay;
- (void)seekToCurrentPlayerItemTime:(double)arg1;
- (id)urlFromPlayItem:(id)arg1;
- (void)errorCallback:(id)arg1;
- (id)errorWithCode:(long long)arg1 reason:(id)arg2 item:(id)arg3;
- (id)errorWithCode:(long long)arg1 reason:(id)arg2 url:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerItemDidReachEnd:(id)arg1;
- (double)getDurationTime;
- (double)getCurrentTime;
- (id)getPlayer;
- (_Bool)isPlaying;
- (void)pause;
- (void)play;
- (void)preparePlayerWithItem:(id)arg1;
- (void)fillQQPlayerItemData:(id)arg1;
- (void)asyncLoadAsset:(id)arg1 withKeys:(id)arg2;
- (void)loadNextAsset:(id)arg1;
- (void)loadVideoUrls:(id)arg1 seekTime:(double)arg2;

@end

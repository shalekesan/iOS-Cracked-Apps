//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFESPDYFrame.h"

@interface TFESPDYGoAwayFrame : TFESPDYFrame
{
    unsigned int _lastGoodStreamId;
    unsigned int _statusCode;
}

@property(nonatomic) unsigned int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) unsigned int lastGoodStreamId; // @synthesize lastGoodStreamId=_lastGoodStreamId;

@end


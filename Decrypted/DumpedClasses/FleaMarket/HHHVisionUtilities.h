//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HHHVisionUtilities : NSObject
{
}

+ (unsigned long long)availableDiskSpaceInBytes;
+ (double)angleOffsetFromPortraitOrientationToOrientation:(long long)arg1;
+ (struct opaqueCMSampleBuffer *)createOffsetSampleBufferWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withTimeOffset:(CDStruct_1b6d18a9)arg2;
+ (id)connectionWithMediaType:(id)arg1 fromConnections:(id)arg2;
+ (id)audioDevice;
+ (id)captureDeviceForPosition:(long long)arg1;
+ (struct CGPoint)convertToPointOfInterestFromViewCoordinates:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2;

@end


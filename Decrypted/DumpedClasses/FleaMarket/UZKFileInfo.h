//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface UZKFileInfo : NSObject
{
    _Bool _isEncryptedWithPassword;
    _Bool _isDirectory;
    NSDate *_timestamp;
    NSString *_filename;
    unsigned long long _CRC;
    unsigned long long _uncompressedSize;
    unsigned long long _compressedSize;
    long long _compressionMethod;
    struct tm_unz_s _zipTMUDate;
}

+ (id)fileInfo:(struct unz_file_info_s *)arg1 filename:(id)arg2;
@property struct tm_unz_s zipTMUDate; // @synthesize zipTMUDate=_zipTMUDate;
@property(readonly) long long compressionMethod; // @synthesize compressionMethod=_compressionMethod;
@property(readonly) _Bool isDirectory; // @synthesize isDirectory=_isDirectory;
@property(readonly) _Bool isEncryptedWithPassword; // @synthesize isEncryptedWithPassword=_isEncryptedWithPassword;
@property(readonly) unsigned long long compressedSize; // @synthesize compressedSize=_compressedSize;
@property(readonly) unsigned long long uncompressedSize; // @synthesize uncompressedSize=_uncompressedSize;
@property(readonly) unsigned long long CRC; // @synthesize CRC=_CRC;
@property(readonly) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)readDate:(struct tm_unz_s)arg1;
- (long long)readCompressionMethod:(unsigned long long)arg1 flag:(unsigned long long)arg2;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithFileInfo:(struct unz_file_info_s *)arg1 filename:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (ns_string_file)
+ (id)format_number_string:(id)arg1;
+ (id)string_with_file_len:(long double)arg1 decimal_places:(unsigned short)arg2;
+ (id)string_with_file_len:(long double)arg1;
+ (long double)size_with_file_path:(id)arg1;
+ (id)doc_dir;
+ (id)caches_dir;
+ (id)temp_dir;
+ (id)home_dir;
+ (id)app_dir;
- (_Bool)is_deletable_then_remove:(id *)arg1;
- (_Bool)is_deletable;
- (_Bool)is_executable;
- (_Bool)is_writable;
- (_Bool)is_readable;
- (_Bool)file_exists_with_is_directory:(_Bool *)arg1;
- (_Bool)file_exists;
- (long double)size_for_file_path;
- (id)attributes_for_file_path;
@end

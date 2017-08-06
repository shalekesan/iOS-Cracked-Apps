//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIGestureRecognizer, UIView, mw_scroll_view;

@protocol mw_scroll_delgate <NSObject>
- (UIView *)csv:(mw_scroll_view *)arg1 cell_for_index:(long long)arg2 rows:(long long)arg3 size:(struct CGSize)arg4 cell_view:(UIView *)arg5;
- (long long)number_of_rows:(mw_scroll_view *)arg1;

@optional
- (void)csv:(mw_scroll_view *)arg1 resize:(UIView *)arg2 index:(long long)arg3 rows:(long long)arg4 from_size:(struct CGSize)arg5 to_size:(struct CGSize)arg6;
- (void)csv:(mw_scroll_view *)arg1 exchange_from_index:(long long)arg2 to_index:(long long)arg3 rows:(long long)arg4;
- (void)csv:(mw_scroll_view *)arg1 move_from_index:(long long)arg2 to_index:(long long)arg3 rows:(long long)arg4;
- (void)csv:(mw_scroll_view *)arg1 did_scroll_from_index:(long long)arg2 to_index:(long long)arg3 rows:(long long)arg4 is_gesture:(_Bool)arg5;
- (void)csv:(mw_scroll_view *)arg1 will_scroll_from_index:(long long)arg2 to_index:(long long)arg3 rows:(long long)arg4 is_gesture:(_Bool)arg5;
- (_Bool)csv:(mw_scroll_view *)arg1 reusable_cell:(UIView *)arg2 index:(long long)arg3 rows:(long long)arg4 size:(struct CGSize)arg5;
- (void)csv:(mw_scroll_view *)arg1 from_index:(long long)arg2 to_index:(long long)arg3 rows:(long long)arg4 per:(double)arg5;
- (_Bool)csv:(mw_scroll_view *)arg1 gr:(UIGestureRecognizer *)arg2 should_begin:(_Bool)arg3;
- (long long)csv:(mw_scroll_view *)arg1 index_for_curr_index:(long long)arg2 index:(long long)arg3 rows:(long long)arg4 flag:(long long)arg5;
- (void)csv:(mw_scroll_view *)arg1 tap_on_cell:(UIView *)arg2 index:(long long)arg3 rows:(long long)arg4;
@end

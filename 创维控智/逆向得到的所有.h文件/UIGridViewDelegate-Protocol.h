//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIGridView, UIGridViewCell;

@protocol UIGridViewDelegate <NSObject>
- (UIGridViewCell *)gridView:(UIGridView *)arg1 cellForRowAt:(int)arg2 AndColumnAt:(int)arg3;
- (long long)numberOfCellsOfGridView:(UIGridView *)arg1;
- (long long)numberOfColumnsOfGridView:(UIGridView *)arg1;
- (double)gridView:(UIGridView *)arg1 heightForRowAt:(int)arg2;
- (double)gridView:(UIGridView *)arg1 widthForColumnAt:(int)arg2;

@optional
- (void)gridView:(UIGridView *)arg1 didLongPressRowAt:(int)arg2 AndColumnAt:(int)arg3;
- (void)gridView:(UIGridView *)arg1 didSelectRowAt:(int)arg2 AndColumnAt:(int)arg3;
@end


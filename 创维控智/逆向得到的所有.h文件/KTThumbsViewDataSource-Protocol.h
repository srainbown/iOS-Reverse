//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTThumbView, KTThumbsView;

@protocol KTThumbsViewDataSource <NSObject>
- (KTThumbView *)thumbsView:(KTThumbsView *)arg1 thumbForIndex:(long long)arg2;
- (long long)thumbsViewNumberOfThumbs:(KTThumbsView *)arg1;
@end


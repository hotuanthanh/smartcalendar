//
//  ModelController.h
//  SmartCalendar
//
//  Created by Ho Tuan Thanh on 12/4/13.
//  Copyright (c) 2013 Ho Tuan Thanh. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

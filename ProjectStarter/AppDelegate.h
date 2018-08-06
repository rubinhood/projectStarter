//
//  AppDelegate.h
//  ProjectStarter
//
//  Created by Sarfaraz Halai on 2018-08-06.
//  Copyright © 2018 Sarfaraz Halai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


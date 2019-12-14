// swift-tools-version:5.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Analytics",
    products: [
        .library(
            name: "Analytics",
            targets: ["Analytics"]),
    ],
    dependencies: [
        .package(
            url: "https://github.com/amplitude/Amplitude-iOS",
            Version(4, 9, 3)..<Version(5, 0, 0)),
    ],
    targets: [
        .target(
            name: "Analytics",
            dependencies: ["Amplitude"],
            path: "Analytics",
            publicHeadersPath: "include",
            cSettings: [
            .headerSearchPath("Classes"),
            .headerSearchPath("Classes/Crypto"),
            .headerSearchPath("Classes/Integrations"),
            .headerSearchPath("Classes/Internal"),
            .headerSearchPath("Classes/Middlewares"),
            .headerSearchPath("Vendor"),
        ]),
    ]
)

#include "swen.h"
#include "commands.h"
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        return cmd_help();
    }
    
    const char* cmd = argv[1];
    
    if (strcmp(cmd, "add") == 0) {
        return cmd_add(argc - 2, argv + 2);
    }
    else if (strcmp(cmd, "clone") == 0) {
        return cmd_clone(argc - 2, argv + 2);
    }
    else if (strcmp(cmd, "snapshot") == 0) {
        return cmd_snapshot(argc - 2, argv + 2);
    }
    else if (strcmp(cmd, "help") == 0 || strcmp(cmd, "--help") == 0) {
        return cmd_help();
    }
    else if (strcmp(cmd, "--version") == 0) {
        printf("Swen v%s\n", SWEN_VERSION);
        return 0;
    }
    else {
        printf("❌ Unknown command: %s\n", cmd);
        printf("Run 'swen help' for available commands.\n");
        return 1;
    }
}

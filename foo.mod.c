#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb70317a1, "module_layout" },
	{ 0xd9b69d96, "remove_local_scheduler" },
	{ 0xf1ad5c6e, "add_local_scheduler" },
	{ 0xf9fc436, "get_pi_task" },
	{ 0xada07dde, "find_by_tgid" },
	{ 0xe606a976, "current_task" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "336282582256C0EA7CDFB15");

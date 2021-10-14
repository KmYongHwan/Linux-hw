#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x28ce2437, "stm_source_write" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x3cb7e7b4, "stm_source_register_device" },
	{ 0x56c7eceb, "stm_source_unregister_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ee7d3cd, "hrtimer_init" },
};

MODULE_INFO(depends, "stm_core");


MODULE_INFO(srcversion, "ACCAEAB63271C66DB44ECD8");

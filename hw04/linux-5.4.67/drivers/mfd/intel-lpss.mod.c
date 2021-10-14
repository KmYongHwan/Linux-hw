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
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0xa73c2a60, "clk_register_fractional_divider" },
	{ 0x20136604, "dev_pm_qos_hide_latency_tolerance" },
	{ 0x5c49fb86, "debugfs_create_x32" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0xffb7c514, "ida_free" },
	{ 0x77c37f48, "devm_ioremap_uc" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0xc9f0f517, "clk_register_fixed_rate" },
	{ 0x7f2dd6c6, "devm_kmemdup" },
	{ 0x18037a25, "device_for_each_child_reverse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0x272b4e9, "clkdev_drop" },
	{ 0x3b47a4d, "clkdev_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6915fe, "dev_pm_qos_expose_latency_tolerance" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x92295424, "clk_register_gate" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D4FF79D807B85EE647496CA");

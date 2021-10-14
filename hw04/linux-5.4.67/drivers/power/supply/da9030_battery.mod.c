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
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc4142837, "seq_printf" },
	{ 0x70691c99, "single_open" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x6114f186, "power_supply_register" },
	{ 0xde87e6f0, "da903x_register_notifier" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x32dc332d, "da903x_writes" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x14a8d7bd, "da903x_query_status" },
	{ 0xca230521, "da903x_reads" },
	{ 0xc8e11883, "da903x_read" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xa6bd321d, "da903x_unregister_notifier" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0xba16e3, "da903x_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1C529036089C335E2C336AD");

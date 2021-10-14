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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xab334ebf, "w1_unregister_family" },
	{ 0xa02639dc, "w1_register_family" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4147f1a4, "power_supply_am_i_supplied" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x6a2a0a37, "w1_write_block" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf765945, "w1_read_block" },
	{ 0x13cb80df, "w1_write_8" },
	{ 0xde3f3b95, "w1_reset_select_slave" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "CEBED0968B0BEB73D67F4D8");

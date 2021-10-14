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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x76964c57, "usb_get_phy" },
	{ 0x24519c40, "platform_get_resource_byname" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeb561ef, "regulator_get" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xf0b5498d, "regulator_set_current_limit" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xc1573d6a, "regulator_put" },
	{ 0x7af6e19, "usb_put_phy" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D21A4C966C03ACB6382433A");

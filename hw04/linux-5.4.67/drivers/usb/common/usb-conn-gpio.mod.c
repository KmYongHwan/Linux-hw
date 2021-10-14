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
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xe6b8e754, "usb_role_switch_get" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5b88b85d, "gpiod_set_debounce" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x63d98d0f, "regulator_is_enabled" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x818ea7be, "pinctrl_pm_select_sleep_state" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xef0f8607, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-usb-b-connector");
MODULE_ALIAS("of:N*T*Cgpio-usb-b-connectorC*");

MODULE_INFO(srcversion, "8BFA63386102661E4527F7C");

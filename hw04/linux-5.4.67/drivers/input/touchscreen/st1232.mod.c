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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xff76d558, "input_register_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a0d0767, "device_get_match_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x353c85e5, "dev_pm_qos_remove_request" },
	{ 0x3a0abca, "dev_pm_qos_add_ancestor_request" },
	{ 0x5ada0011, "input_event" },
	{ 0xdbcf3e33, "touchscreen_report_pos" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csitronix,st1232");
MODULE_ALIAS("of:N*T*Csitronix,st1232C*");
MODULE_ALIAS("of:N*T*Csitronix,st1633");
MODULE_ALIAS("of:N*T*Csitronix,st1633C*");
MODULE_ALIAS("i2c:st1232-ts");
MODULE_ALIAS("i2c:st1633-ts");

MODULE_INFO(srcversion, "AE986437452ED39F3C529B6");

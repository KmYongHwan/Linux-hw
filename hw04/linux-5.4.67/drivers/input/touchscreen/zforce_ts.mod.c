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
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0xff76d558, "input_register_device" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xc7fad5dc, "pm_stay_awake" },
	{ 0xabe00763, "pm_relax" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0xcb4c07c9, "input_mt_report_finger_count" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0x29361773, "complete" },
	{ 0xa9dcba35, "pm_wakeup_dev_event" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:zforce-ts");

MODULE_INFO(srcversion, "DFD59CC08C0B9B433AF8B08");

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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xff76d558, "input_register_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x74b36a91, "input_mt_assign_slots" },
	{ 0xfe9b3b60, "input_mt_get_slot_by_key" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:pixcir_ts");
MODULE_ALIAS("i2c:pixcir_tangoc");

MODULE_INFO(srcversion, "6B8A2E1DB03E419801775F8");

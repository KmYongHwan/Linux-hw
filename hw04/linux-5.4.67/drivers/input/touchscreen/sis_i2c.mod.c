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
	{ 0xff76d558, "input_register_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0xfe9b3b60, "input_mt_get_slot_by_key" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "crc-itu-t");

MODULE_ALIAS("i2c:sis_i2c_ts");
MODULE_ALIAS("i2c:9200-ts");

MODULE_INFO(srcversion, "3B2D05E1F6702E38ADFCB91");

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
	{ 0x63331ce9, "simple_attr_release" },
	{ 0xc04c0275, "simple_attr_write" },
	{ 0x2fc2002b, "simple_attr_read" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf1ebe9a5, "desc_to_gpio" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x5c344b83, "debugfs_create_u16" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xff76d558, "input_register_device" },
	{ 0x923438df, "devm_device_add_group" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x754d539c, "strlen" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x349cba85, "strchr" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x3a0d0767, "device_get_match_data" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xff9513b5, "input_mt_report_pointer_emulation" },
	{ 0xdbcf3e33, "touchscreen_report_pos" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x9a087e18, "simple_attr_open" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x96848186, "scnprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ev-ft5726");
MODULE_ALIAS("i2c:ft6236");

MODULE_INFO(srcversion, "799C5BAB14A9D98AF7D66C8");

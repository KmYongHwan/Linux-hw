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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3a0d0767, "device_get_match_data" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdbcf3e33, "touchscreen_report_pos" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x5ada0011, "input_event" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:semtech_sx8650");
MODULE_ALIAS("i2c:semtech_sx8654");
MODULE_ALIAS("i2c:semtech_sx8655");
MODULE_ALIAS("i2c:semtech_sx8656");

MODULE_INFO(srcversion, "4F5452F970791635ECDBFC1");

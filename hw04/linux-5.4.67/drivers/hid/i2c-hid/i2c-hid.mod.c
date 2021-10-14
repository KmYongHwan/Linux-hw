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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x277a6037, "hid_add_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xbf0837a6, "hid_parse_report" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x6cb881cb, "acpi_bus_get_device" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x621bf991, "acpi_device_fix_up_power" },
	{ 0x5495392, "hid_debug" },
	{ 0x12fa8db6, "hid_input_report" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x963804a8, "acpi_match_device_ids" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa1799421, "i2c_smbus_read_byte" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x387c599f, "hid_destroy_device" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x32ea5ef6, "hid_allocate_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("i2c:hid");
MODULE_ALIAS("i2c:hid-over-i2c");
MODULE_ALIAS("acpi*:ACPI0C50:*");
MODULE_ALIAS("acpi*:PNP0C50:*");

MODULE_INFO(srcversion, "7D2C083597412F9C1B7A3F3");

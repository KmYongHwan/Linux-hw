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
	{ 0x752832c, "noop_llseek" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x47fda759, "misc_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xaada43b8, "sensor_hub_register_callback" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xe4f5a219, "stream_open" },
	{ 0x50a90e8d, "bsearch" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5d7db7a9, "sensor_hub_get_feature" },
	{ 0xada20bdd, "sensor_hub_input_attr_get_raw_value" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbc19f3cd, "sensor_hub_remove_callback" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x17463ca0, "sensor_hub_device_open" },
	{ 0xc91144eb, "sensor_hub_device_close" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd4831c1, "sensor_hub_set_feature" },
	{ 0x54dce365, "hid_sensor_get_usage_index" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-sensor-hub");

MODULE_ALIAS("platform:HID-SENSOR-2000e1");
MODULE_ALIAS("platform:HID-SENSOR-2000e2");

MODULE_INFO(srcversion, "E72EBFC4C4D338D9FAECBB0");

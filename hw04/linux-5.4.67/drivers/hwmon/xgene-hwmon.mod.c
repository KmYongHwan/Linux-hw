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
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x29361773, "complete" },
	{ 0x3955fcf6, "__kfifo_in_r" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xba28a93c, "mbox_request_channel" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9fc1991d, "hwmon_device_register_with_groups" },
	{ 0x4d924f20, "memremap" },
	{ 0xec3ec8af, "pcc_mbox_request_channel" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xfd7ccba2, "sysfs_notify" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x33fcf44a, "__kfifo_out_r" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1a373d22, "mbox_chan_txdone" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7908cf82, "mbox_send_message" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8b72ed41, "pcc_mbox_free_channel" },
	{ 0x712105fb, "mbox_free_channel" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Capm,xgene-slimpro-hwmon");
MODULE_ALIAS("of:N*T*Capm,xgene-slimpro-hwmonC*");
MODULE_ALIAS("acpi*:APMC0D29:*");
MODULE_ALIAS("acpi*:APMC0D8A:*");

MODULE_INFO(srcversion, "C67806B5CC0088FC15D42DC");

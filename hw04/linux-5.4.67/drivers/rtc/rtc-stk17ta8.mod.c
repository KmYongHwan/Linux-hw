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
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0x2cd9f628, "rtc_nvmem_register" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AA2252C8A9262D0F636A71F");

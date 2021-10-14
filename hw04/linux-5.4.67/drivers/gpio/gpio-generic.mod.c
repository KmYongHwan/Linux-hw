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
	{ 0xdae1d8d2, "devm_gpiochip_add_data" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x24519c40, "platform_get_resource_byname" },
	{ 0xf065f629, "ioread16be" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:basic-mmio-gpio");
MODULE_ALIAS("platform:basic-mmio-gpio-be");

MODULE_INFO(srcversion, "3446DE6C50C961EA50E4A5C");

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
	{ 0xaa1c36de, "cros_ec_lpc_io_bytes_mec" },
	{ 0xf5c87c59, "cros_ec_lpc_mec_destroy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0xc4ebc6b3, "cros_ec_lpc_mec_init" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
};

MODULE_INFO(depends, "cros_ec_lpcs");

MODULE_ALIAS("acpi*:GOOG000C:*");

MODULE_INFO(srcversion, "A47FDF84DFF629B5C09A57D");

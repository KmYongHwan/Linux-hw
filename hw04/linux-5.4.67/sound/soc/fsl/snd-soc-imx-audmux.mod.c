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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx21-audmux");
MODULE_ALIAS("of:N*T*Cfsl,imx21-audmuxC*");
MODULE_ALIAS("of:N*T*Cfsl,imx31-audmux");
MODULE_ALIAS("of:N*T*Cfsl,imx31-audmuxC*");
MODULE_ALIAS("platform:imx21-audmux");
MODULE_ALIAS("platform:imx31-audmux");

MODULE_INFO(srcversion, "CD31C870960A89D1AA729D9");

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
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x90f771ce, "sdio_writesb" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0xf4608acd, "mmc_hw_reset" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x1e8b2d0e, "sdio_get_host_pm_caps" },
	{ 0xc5850110, "printk" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2d1ff8e1, "sdio_readsb" },
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0x892d752a, "sdio_f0_writeb" },
	{ 0x3ca22690, "sdio_set_host_pm_flags" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2869358, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xa8f6bf5c, "sdio_memcpy_toio" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0xd79398b2, "sdio_memcpy_fromio" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x7d477f96, "sdio_set_block_size" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0xb3dcfb60, "sdio_release_host" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c*v0097d4076*");

MODULE_INFO(srcversion, "67EE4BCE7BAF9BDFA932AD8");

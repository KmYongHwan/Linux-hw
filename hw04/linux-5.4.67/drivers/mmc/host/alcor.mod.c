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
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf66c919b, "alcor_write16" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc8333695, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x13379ad2, "alcor_write32be" },
	{ 0x7896ccdc, "sg_miter_start" },
	{ 0x651944ed, "alcor_read32be" },
	{ 0xf1094d2, "alcor_read32" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x13799a9f, "mmc_free_host" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x5dfc583d, "mmc_alloc_host" },
	{ 0xe91f6f8e, "alcor_write32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd3ba8ddf, "alcor_write8" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xc773849f, "sg_miter_stop" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xde006432, "sg_miter_next" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x5e7f490d, "mmc_request_done" },
	{ 0x7eaedd15, "alcor_read8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "alcor_pci");

MODULE_ALIAS("platform:alcor_sdmmc");

MODULE_INFO(srcversion, "A9DD2E5B16AA0105871C517");

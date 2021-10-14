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
	{ 0x43551e0, "mmc_gpio_get_cd" },
	{ 0x73383a98, "mmc_gpio_get_ro" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x8dfc2f94, "mmc_gpiod_request_cd_irq" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x12f7e66c, "mmc_gpiod_request_ro" },
	{ 0x78481c6, "mmc_gpiod_request_cd" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x5dfc583d, "mmc_alloc_host" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5e7f490d, "mmc_request_done" },
	{ 0x1d71cf41, "spi_bus_unlock" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x61588fe2, "spi_bus_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba55d23e, "crc7_be" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xf12d9d21, "spi_sync_locked" },
	{ 0x13799a9f, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0xc8333695, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "crc-itu-t,crc7");

MODULE_ALIAS("of:N*T*Cmmc-spi-slot");
MODULE_ALIAS("of:N*T*Cmmc-spi-slotC*");

MODULE_INFO(srcversion, "2F740B5703CFE0E31CEE01B");

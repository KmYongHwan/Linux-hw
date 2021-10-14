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
	{ 0x95b41ce, "ata_sff_port_ops" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x63fd46c1, "phy_power_on" },
	{ 0xe68b2f71, "__dma_request_channel" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8cd6c9c3, "ata_qc_complete" },
	{ 0x1e47fa9d, "ata_bmdma_qc_issue" },
	{ 0x374c53e1, "ata_get_cmd_descript" },
	{ 0x436dbeba, "ata_sff_exec_command" },
	{ 0x124ff31e, "dw_dma_remove" },
	{ 0x92992539, "ata_host_detach" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc645475b, "phy_exit" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa5c0017, "ata_host_alloc_pinfo" },
	{ 0xe70f1f89, "sata_sff_hardreset" },
	{ 0x4b8e49b2, "ata_sff_error_handler" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x726e8b16, "phy_power_off" },
	{ 0x318de333, "dma_release_channel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("of:N*T*Camcc,sata-460ex");
MODULE_ALIAS("of:N*T*Camcc,sata-460exC*");

MODULE_INFO(srcversion, "90A52E67513B3654BF3F078");

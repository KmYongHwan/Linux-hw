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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x8ac3fb71, "scsi_bios_ptable" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x6c5dae23, "scsi_kmap_atomic_sg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x56c8799d, "scsi_kunmap_atomic_sg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EA74E76E6291CB90FC714D9");

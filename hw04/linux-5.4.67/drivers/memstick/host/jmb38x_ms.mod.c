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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x95d79dbf, "memstick_remove_host" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xa8ff0101, "memstick_free_host" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3eee3c2e, "memstick_alloc_host" },
	{ 0xc1c110c9, "memstick_add_host" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0x38a70269, "memstick_next_req" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x3c10c460, "memstick_suspend_host" },
	{ 0xc9b3b641, "memstick_detect_change" },
	{ 0x45a77022, "memstick_resume_host" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xba312d7b, "current_task" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "memstick");

MODULE_ALIAS("pci:v0000197Bd00002383sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002388sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002393sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "79450A6837EA5491201D9E9");

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
	{ 0x2d3385d3, "system_wq" },
	{ 0xeca45ed5, "mei_irq_write_handler" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xe59ac54c, "mei_write_is_idle" },
	{ 0x9d818f91, "mei_device_init" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xa5bff49d, "__tracepoint_mei_pci_cfg_read" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xe7d00fa9, "mei_restart" },
	{ 0xa2b721b2, "mei_irq_compl_handler" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x45cad05e, "mei_register" },
	{ 0x3cbf72d, "mei_stop" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x8b1c3f26, "mei_irq_read_handler" },
	{ 0xc9476ca8, "mei_cancel_work" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc2b0b858, "mei_deregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6d5ba177, "mei_start" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x90a24af4, "mei_fw_status2str" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x755bc51a, "dev_pm_domain_set" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("pci:v00008086d00000F18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002298sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A2F7D86F305C37D59E97354");

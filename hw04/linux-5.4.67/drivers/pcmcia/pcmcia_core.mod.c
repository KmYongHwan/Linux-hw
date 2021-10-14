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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x4ce774ca, "pci_set_cacheline_size" },
	{ 0x7a4d5f5c, "pci_stop_and_remove_bus_device" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xe31a54ff, "pci_fixup_cardbus" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd38240bf, "pci_bus_assign_resources" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x785dd9f2, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x548bc933, "class_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x958e44df, "pci_bus_add_devices" },
	{ 0xce807a25, "up_write" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe6faabcc, "pci_scan_slot" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcdc58381, "pci_scan_bridge" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x963cf8c8, "get_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x29361773, "complete" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x9f39a3c9, "pci_bus_size_bridges" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7635957AD966934830B4994");

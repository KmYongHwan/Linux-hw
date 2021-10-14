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
	{ 0x84cc1f26, "flexcop_eeprom_check_mac_addr" },
	{ 0xc068715e, "flexcop_i2c_request" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x8161ba67, "flexcop_pass_dmx_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1eae0cc5, "flexcop_device_initialize" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xb0369a86, "flexcop_device_kfree" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x2639cf5, "flexcop_pid_feed_control" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xbc6d3c05, "flexcop_device_kmalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xac682cba, "flexcop_sram_set_dest" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x43b3d150, "flexcop_pass_dmx_packets" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xa1df4cf7, "flexcop_device_exit" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("pci:v000013D0d00002103sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1487DBAEBB98384B955DEC0");

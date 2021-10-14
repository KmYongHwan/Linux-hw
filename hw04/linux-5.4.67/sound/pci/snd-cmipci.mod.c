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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x323ad9a7, "snd_pcm_hw_constraint_msbits" },
	{ 0x13b376c9, "snd_opl3_hwdep_new" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xf0de439, "snd_mpu401_uart_new" },
	{ 0xc4142837, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9e913c1, "snd_pcm_alt_chmaps" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0xd3d70f53, "snd_ctl_notify" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0xf3373ad0, "__gameport_register_port" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0x65523885, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0xe15f5c67, "gameport_unregister_port" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x6853e173, "snd_ctl_find_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x698f6d3a, "snd_opl3_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x16cc630c, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x6d52d252, "param_ops_long" },
	{ 0x605adfe9, "snd_pcm_hw_constraint_minmax" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x82351cde, "snd_pcm_add_chmap_ctls" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x550051c6, "gameport_set_phys" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd,gameport");

MODULE_ALIAS("pci:v000013F6d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00000111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00000112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00000111sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0D4C1589C2B93D43544A7DC");

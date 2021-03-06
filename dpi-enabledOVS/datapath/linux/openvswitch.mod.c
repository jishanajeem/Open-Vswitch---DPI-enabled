#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1c2c1f86, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2b4cc892, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xa0991a59, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xb68d5a50, __VMLINUX_SYMBOL_STR(genlmsg_new_unicast) },
	{ 0x474e4abd, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa02cec1c, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xa8bed081, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xe3f2bdbd, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0x68e2f221, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x1ccc68b5, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x9353762f, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x6c92188c, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa4eb4eff, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x94b2bc1f, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x235087bb, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x1c5f82ff, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5bf143ee, __VMLINUX_SYMBOL_STR(skb_zerocopy) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x1dce69ca, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0x9082ddd8, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x226c7fc9, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbd67ef57, __VMLINUX_SYMBOL_STR(__skb_checksum) },
	{ 0xec93f258, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x6550df96, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x506a3a8e, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x41596dfe, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x63df28ad, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x47b274b2, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace16) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x24fbcff1, __VMLINUX_SYMBOL_STR(vxlan_sock_add) },
	{ 0x73e24ebe, __VMLINUX_SYMBOL_STR(skb_zerocopy_headlen) },
	{ 0xc417175a, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0x7a213964, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xbd61c5ad, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x23ae0d7f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x725151, __VMLINUX_SYMBOL_STR(vxlan_xmit_skb) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x8329e6f0, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaefe73b2, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xb6e41883, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8726072d, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0x8efc855c, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x74adb98, __VMLINUX_SYMBOL_STR(gre_cisco_unregister) },
	{ 0xc204a047, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb6ed1e53, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x39021829, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x7daa221e, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xa31f86f2, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x22e1713, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3e8576a4, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x25d1c69c, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9032ad3c, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xd45e3507, __VMLINUX_SYMBOL_STR(gre_build_header) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0xcb97e68e, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x4c832d2a, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf67a5ff2, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xfb9a07cd, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xa37e78b6, __VMLINUX_SYMBOL_STR(flex_array_get) },
	{ 0x9b6eb137, __VMLINUX_SYMBOL_STR(ksize) },
	{ 0xa9f8cb36, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0xe7ae752a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xef05f72c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd2c52561, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0x45a7c4e0, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x4a575e94, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x8bf826c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x579fbcd2, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xb644eb90, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x33700304, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x51164b9f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7678a8c7, __VMLINUX_SYMBOL_STR(gre_cisco_register) },
	{ 0xbc435770, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x54f8f28b, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xcceca02, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xc9b0941f, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x51d97adf, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xe13a8885, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x67f7403e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb2b258f3, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xda57a053, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xe78bef9a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xc3af83b0, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xce46e140, __VMLINUX_SYMBOL_STR(ktime_get_ts) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x876a0a01, __VMLINUX_SYMBOL_STR(netlink_set_err) },
	{ 0x7a4b576, __VMLINUX_SYMBOL_STR(flex_array_free) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x9fada247, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4a619f83, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x2c3dd176, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x846b607b, __VMLINUX_SYMBOL_STR(vxlan_sock_release) },
	{ 0xd86945e, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x9d90f95f, __VMLINUX_SYMBOL_STR(__crc32c_le_combine) },
	{ 0xd7d1c986, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x13315729, __VMLINUX_SYMBOL_STR(flex_array_alloc) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x33ae5855, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xf2b362fd, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x8235805b, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x7d50a24, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x771ef438, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xc9e85823, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xc42346a2, __VMLINUX_SYMBOL_STR(genl_notify) },
	{ 0x1ec3d970, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xcb821405, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x6bd6427, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xb4b09c9e, __VMLINUX_SYMBOL_STR(__nla_put) },
	{ 0x9fd7cda1, __VMLINUX_SYMBOL_STR(flex_array_prealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcrc32c,vxlan,gre";


MODULE_INFO(srcversion, "176DADB1343E7DDBE2652A4");
